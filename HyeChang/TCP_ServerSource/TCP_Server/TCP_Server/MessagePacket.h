#pragma once

enum class EMessageID : int
{
    UNDEFINED                   = 0,                      //��Ȯ��
    C2S_ProcessPacket_1         = 11001,                  //Ŭ���̾�Ʈ_���� 1�� �Է� ��Ŷ ó��
    C2S_ProcessPacket_2         = 11002,                  //Ŭ���̾�Ʈ_���� 2�� �Է� ��Ŷ ó��
    C2S_ProcessPacket_3         = 11003,                  //Ŭ���̾�Ʈ_���� 3�� �Է� ��Ŷ ó��
    C2S_ProcessPacket_4         = 11004,                  //Ŭ���̾�Ʈ_���� 4�� �Է� ��Ŷ ó��

    S2C_ProcessPacket_1         = 21001,                  //����_Ŭ���̾�Ʈ 1�� �Է� ��Ŷ ó��
    S2C_ProcessPacket_2         = 21002,                  //����_Ŭ���̾�Ʈ 2�� �Է� ��Ŷ ó��
    S2C_ProcessPacket_3         = 21003,                  //����_Ŭ���̾�Ʈ 3�� �Է� ��Ŷ ó��
    S2C_ProcessPacket_4         = 21004,                  //����_Ŭ���̾�Ʈ 4�� �Է� ��Ŷ ó��
};

enum class EProcessFlag : int
{
    UNDEFINED = 0,  //������
    PROCESS_OK = 1,  //ó���Ϸ�
    PROCESS_FAIL = 2   //ó������
};

#pragma pack(push,1)

struct MessageHeader
{
    int MessageID;
    int MessageSize;
    int SenderSocketID;
    int ReceiverSocketID;
};