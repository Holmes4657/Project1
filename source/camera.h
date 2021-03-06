#ifndef CAMERA_H
#define CAMERA_H

#include <cglm/cglm.h>
#include <GL/glew.h>

typedef enum Camera_Movement {
	FORWARD, BACKWARD, LEFT, RIGHT
} Camera_Movement;

void Camera(vec3 position, vec3 up, float yaw, float pitch);
void GetViewMatrix(mat4 destination);
void ProcessKeyboard(enum Camera_Movement direction, float deltaTime);
void ProcessMouseMovement(float xoffset, float yoffset, GLboolean constrainPitch);
void ProcessMouseScroll(float yoffset);

float fov_back(void);

#endif // !CAMERA_H
