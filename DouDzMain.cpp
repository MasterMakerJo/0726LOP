
#include "BoardMessageControl.h"
int	main()
{
	struct Ddz tDdz, *pDdz = &tDdz;
	BoardMessageControl * pBoardControl = new BoardMessageControl();
	pBoardControl->InitTurn(pDdz);			//��ʼ������
	while (pDdz->iStatus != 0)
	{
		pBoardControl->InputMsg(pDdz);			//������Ϣ
		pBoardControl->AnalyzeMsg(pDdz);		//����������Ϣ
		pBoardControl->OutputMsg(pDdz);		//�����Ϣ
		//pBoardControl->CalOthers(pDdz);		//������������
	}
	delete(pBoardControl);
	return 0;
}
	