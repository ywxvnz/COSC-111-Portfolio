import serial
import requests
import time

SERIAL_PORT = "COM4"       
BAUD_RATE = 9600

BASE_API_URL = "http://172.20.10.3:8000"

def call_api(group_number):
    endpoint = f"/led/group/{group_number}/toggle"
    url = BASE_API_URL + endpoint

    print(f"[INFO] Group number received: {group_number}")
    print(f"[INFO] Calling endpoint: {endpoint}")

    try:
        response = requests.get(url, timeout=5)
        if response.status_code == 200:
            print("[SUCCESS] API response:", response.text)
        else:
            print("[ERROR] API returned status:", response.status_code)
    except Exception as e:
        print("[ERROR] API call failed:", e)

def main():
    try:
        ser = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
        print("[SYSTEM] Listening to Arduino...")
        time.sleep(2) 
    except Exception as e:
        print("[FATAL] Cannot connect to serial port:", e)
        return

    while True:
        try:
            if ser.in_waiting > 0:
                data = ser.readline().decode("utf-8").strip()

                if data.isdigit():
                    group_number = data.lower()
                    call_api(group_number)
                else:
                    print("[WARNING] Invalid input:", data)

        except KeyboardInterrupt:
            print("\n[SYSTEM] Program stopped by user.")
            break

        except Exception as e:
            print("[ERROR] Runtime error:", e)
if __name__ == "__main__":
    main()