#include<GL/glut.h>

void init(void) {
	//����������Ϊ��ɫ ��ɫ����RGB 1��255 ������0.0Ϊ��ȫ��͸��
	glClearColor(1.0, 1.0, 1.0, 0.0);

	//����ΪͶӰģʽ
	glMatrixMode(GL_PROJECTION);
	//ͶӰ��ΧΪ ���½�(0,0),���Ͻ�(200,150) 200��� 150�߶�
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);

}

void lineSegment(void) {
	//ˢ�´���
	glClear(GL_COLOR_BUFFER_BIT);
	//�����߶�Ϊ����ɫ
	glColor3f(0.0, 0.4, 0.2);
	//��֤��ѿ����˵�����(180,15)��(10,145)�Ķ�άֱ�߶�
	glBegin(GL_LINES);
	glVertex2i(180, 15);
	glVertex2i(10, 145);
	
	//ֻ��N/2���߶� NΪ�����
	glVertex2i(50, 50);
	glVertex2i(20, 20);
	glEnd();

	glFlush();

}
void main(int argc, char** argv) {
	//��ʼ��GLUT
	glutInit(&argc, argv);
	//���õ������� RGB��ɫģ�� ��ʾģʽ
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//���ô���λ�� ��������50���� ��������100����
	glutInitWindowPosition(50, 100);
	//���ô��ڴ�С ���400 �߶�300
	glutInitWindowSize(400, 300);
	//��������
	glutCreateWindow("An Example OpenGL Program");

	//��ʼ��ͼ������
	init();
	//��ͼ��������ʾ����
	glutDisplayFunc(lineSegment);
	
	glutMainLoop();



}