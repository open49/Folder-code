import cv2

cap = cv2.VideoCapture(0)

# Start the camera by calling the `open()` method with the `cv2.CAP_ANY` argument.
cap.open(cv2.CAP_ANY)

# Read a frame from the camera.
ret, frame = cap.read()

# Check if the frame was read successfully.
if ret:
    # Display the frame.
    cv2.imshow('Camera', frame)

    # Wait for the user to press a key to exit.
    cv2.waitKey(0)

# Release the camera.
cap.release()
