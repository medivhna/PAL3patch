#include "stdafx.h"
#include "ConfigDescData.h"
#include "D3DEnum.h"
#include "FontEnum.h"
#include "PatchVersionInfo.h"

/*
	��ʽָ����
		������ĸʹ�ð���ַ���������ʹ��ȫ���ַ�
		�����ַ��������������Ǳ�㣬������ӿո�
		�ڶ��˳�ʹ�á�����
		һ�仰�Ծ�Ž�β
*/

ConfigDescItem ConfigDescList_CHS[] = {
	{
		0, FALSE,
		NULL,
		_T("��ӭ"),
		_T("��ӭʹ�á��ɽ������������ֱ��ʲ��� ") PATCH_VERSION_TSTR _T("\r\n")
			_T("����������������Ϸ�ķֱ��ʣ�\r\n")
			_T("ͬʱ�޸�һЩ��Ϸ�����С���⣬\r\n")
			_T("����������һЩʵ�õ�С���ܡ�"),
		_T("��ѡ��������е�ѡ��������á�"),
	},
	{
		0, FALSE,
		NULL,
		_T("��������"),
		_T(""),
		_T(""),
	},
	{
		1, FALSE,
		_T("showabout"),
		_T("��ʾ����"),
		_T("�Ƿ�����Ϸ��������ʱ��ʾ�������ġ����ڡ����ڡ�"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ϸ����������ֱ�ӽ�����Ϸ���档"), _T("0") },
			{ _T("����"), _T("���ô�ѡ�����Ϸ��������ʱ�ᵯ���������ġ����ڡ����ڡ�"), _T("1") },
		}
	},
	{
		1, FALSE,
		_T("setlocale"),
		_T("��������"),
		_T("��ѡ������޸ĳ�������ʱ������������������ڷǶ�Ӧ���Ե�ϵͳ��������Ϸ�������ڼ���ϵͳ�����з������Ϸ��������ʹ�ô�ѡ�����������⡣"),
		NULL,
		{
			{ _T("����"), _T("���ô˹��ܺ���Ϸ���԰汾���������ϵͳ���Զ�Ӧ�Ų������롣"), _T("0") },
			{ _T("��������"), _T("ѡ���ѡ������۲���ϵͳ���԰汾��Σ���Ϸ����ʹ�ü������ı�����ʾ�ַ���\r\n�����ʹ�õ��Ǽ������Ϸ����ѡ���ѡ�"), _T("1") },
			{ _T("��������"), _T("ѡ���ѡ������۲���ϵͳ���԰汾��Σ���Ϸ����ʹ�÷������ı�����ʾ�ַ���\r\n�����ʹ�õ��Ƿ������Ϸ����ѡ���ѡ�"), _T("2") },
		}
	},
	{
		1, FALSE,
		_T("voice"),
		_T("�������"),
		_T("�Ƿ�����ⲿ�����������Ҫʹ������������Ҫ���ñ�ѡ�"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ϸ���򲻻�����ⲿ���������"), _T("0") },
			{ _T("����"), _T("���ô�ѡ�����Ϸ���������ⲿ���������"), _T("1") },
		}
	},
	{
		1, TRUE,
		_T("showfps"),
		_T("��ʾ֡��"),
		_T("��ѡ���������Ϸ�������Ͻ���ʾ��Ϸ֡�ʡ�"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ϸ������ʾ֡�ʡ�"), _T("0") },
			{ _T("����"), _T("���ô�ѡ��󣬲����������Ͻ���ʾ��Ϸ֡�ʡ�"), _T("1") },
		}
	},
	{
		0, FALSE,
		NULL,
		_T("ͼ������"),
		_T(""),
		_T(""),
	},
	{
		1, FALSE,
		_T("game_resolution"),
		_T("�ֱ���"),
		_T("��ѡ����Ե�����Ϸ�ķֱ��ʡ�\r\n��ʽΪ������x�߶�"),
		NULL,
		{ { NULL } },
		EnumDisplayMode,
	},
	{
		1, FALSE,
		_T("game_windowed"),
		_T("���ڻ�"),
		_T("��ѡ�����ʹ��Ϸ�Դ���ģʽ���С�"),
		NULL,
		{
			{ _T("ȫ��Ļ"), _T("ѡ��������Ϸ����ȫ��Ļ��ʽ���С�"), _T("0") },
			{ _T("����ģʽ"), _T("ѡ��������Ϸ���Դ���ģʽ���С�"), _T("1") },
			{ _T("����ģʽ���ޱ߿�"), _T("ѡ��������Ϸ�����ޱ߿�Ĵ���ģʽ���С�"), _T("2") },
		}
	},
	{
		1, TRUE,
		_T("game_zbufferbits"),
		_T("��Ȼ���"),
		_T("��ѡ����Ե�����Ϸ����Ȼ��漶��\r\n��ʽΪ��λ�� ��λ��һ��Ϊ 16 �� 24��\r\nע�⣺������Ϸֻʹ����Ȼ����û��ʹ��ģ�建�棬�������ģ�建��û�����塣"),
		NULL,
		{ { NULL } },
		EnumDepthBuffer,
	},
	{
		1, FALSE,
		_T("game_multisample"),
		_T("�����"),
		_T("��ѡ����Ե�����Ϸ�Ŀ���ݼ���\r\n��ʽΪ������,�ӵȼ� ���ӵȼ�һ����Ϊ 0��"),
		NULL,
		{ { NULL } },
		EnumMultisample,
	},
	{
		1, FALSE,
		_T("clipcursor"),
		_T("�������"),
		_T("�Ƿ�������겶���ܡ�"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ��������������ƶ���"), _T("0") },
			{ _T("����"), _T("���ô�ѡ�������ƶ���Χ������Ϸ����\r\nע�⣺�� F12 ��������ʱ������겶���ܡ�"), _T("1") },
		}
	},
	{
		1, TRUE,
		_T("reduceinputlatency"),
		_T("���������ӳ�"),
		_T("��ѡ����Լ��������ӳ٣��������յ���������������ʾ����ʾ���ϵ��ӳ٣���Ҳ�����ڼ���֡ʱ�������������������ܿ�����"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ϸ�����ӳٽ�ΪĬ��״̬��"), _T("0") },
			{ _T("ģʽ 1"), _T("ѡ���ѡ�����Ϸ�ᾡ�����������ӳ١���ģʽ��Ϊռ�� CPU ��Դ��"), _T("1") },
			{ _T("ģʽ 2"), _T("ѡ���ѡ�����Ϸ�ᾡ�����������ӳ١���ģʽ��Ϊռ���Կ���Դ��"), _T("2") },
		}
	},
	{
		0, TRUE,
		NULL,
		_T("�û���������"),
		_T(""),
		_T(""),
	},
	{
		1, TRUE,
		_T("uiscalefactor"),
		_T("ϵͳ�����С"),
		_T("��ѡ����Ե�����Ϸϵͳ���棨�绶ӭ���桢״̬���桢���׽���ȣ��Ĵ�С��"),
		NULL,
		{
			{ _T("С"), _T("ѡ������ϵͳ���潫������� 50% �����Ŵ�"), _T("small") },
			{ _T("��"), _T("ѡ������ϵͳ���潫������� 75% �����Ŵ�"), _T("medium") },
			{ _T("��"), _T("ѡ������ϵͳ���潫���� 100% �����Ŵ�"), _T("large") },
		}
	},
	{
		1, TRUE,
		_T("softcursor_scalefactor"),
		_T("��������С"),
		_T("��ѡ����Ե���������꣨���ָ�룩�Ĵ�С����ѡ����ڿ����������ʱ��Ч��"),
		NULL,
		{
			{ _T("С"), _T("ѡ������������꽫������� 50% �����Ŵ�"), _T("small") },
			{ _T("��"), _T("ѡ������������꽫������� 75% �����Ŵ�"), _T("medium") },
			{ _T("��"), _T("ѡ������������꽫���� 100% �����Ŵ�"), _T("large") },
		}
	},
	{
		1, TRUE,
		NULL,
		_T("ս����������"),
		_T(""),
		_T(""),
	},
	{
		2, TRUE,
		_T("fixcombatui_scalefactor"),
		_T("Ԫ�ش�С"),
		_T("��ѡ����Ե���ս������Ԫ�أ��簴ť���б��ȣ��Ĵ�С��"),
		NULL,
		{
			{ _T("С"), _T("ѡ������ս������Ԫ�ؽ�������� 50% �����Ŵ�"), _T("small") },
			{ _T("��"), _T("ѡ������ս������Ԫ�ؽ�������� 75% �����Ŵ�"), _T("medium") },
			{ _T("��"), _T("ѡ������ս������Ԫ�ؽ����� 100% �����Ŵ�"), _T("large") },
		}
	},
	{
		2, TRUE,
		_T("fixcombatui_scaletype"),
		_T("���淶Χ"),
		_T("ָ��ս������ռ����Ļ�ķ�Χ��"),
		NULL,
		{
			{ _T("�ޱ�Ե"), _T("ѡ��������Ļ����û�����ס�"), _T("full") },
			{ _T("�б�Ե"), _T("ѡ�������ڿ����ֱ����£���Ļ����������ף��Ա�֤��������� 4:3 ������"), _T("full43") },
		}
	},
	{
		1, TRUE,
		NULL,
		_T("������������"),
		_T(""),
		_T(""),
	},
	{
		2, TRUE,
		_T("fixsceneui_uiscalefactor"),
		_T("Ԫ�ش�С"),
		_T("ָ�������û�����Ԫ�صĴ�С��"),
		NULL,
		{
			{ _T("С"), _T("ѡ�����󣬳����û�����Ԫ�ؽ�������� 50% �����Ŵ�"), _T("small") },
			{ _T("��"), _T("ѡ�����󣬳����û�����Ԫ�ؽ�������� 75% �����Ŵ�"), _T("medium") },
			{ _T("��"), _T("ѡ�����󣬳����û�����Ԫ�ؽ����� 100% �����Ŵ�"), _T("large") },
		}
	},
	{
		2, TRUE,
		_T("fixsceneui_textscalefactor"),
		_T("���ִ�С"),
		_T("ָ�������������֣���������ֵȣ��Ĵ�С��"),
		NULL,
		{
			{ _T("С"), _T("ѡ�����󣬳����������ֽ�������� 50% �����Ŵ�"), _T("small") },
			{ _T("��"), _T("ѡ�����󣬳����������ֽ�������� 75% �����Ŵ�"), _T("medium") },
			{ _T("��"), _T("ѡ�����󣬳����������ֽ����� 100% �����Ŵ�"), _T("large") },
		}
	},
	{
		2, TRUE,
		_T("fixsceneui_iconscalefactor"),
		_T("ͼ���С"),
		_T("ָ����������ͼ�꣨�綯������ȣ��Ĵ�С��"),
		NULL,
		{
			{ _T("С"), _T("ѡ�����󣬳�������ͼ�꽫������� 50% �����Ŵ�"), _T("small") },
			{ _T("��"), _T("ѡ�����󣬳�������ͼ�꽫������� 75% �����Ŵ�"), _T("medium") },
			{ _T("��"), _T("ѡ�����󣬳�������ͼ�꽫���� 100% �����Ŵ�"), _T("large") },
		}
	},
	{
		2, TRUE,
		_T("fixsceneui_scaletype"),
		_T("���淶Χ"),
		_T("ָ����������ռ����Ļ�ķ�Χ��"),
		NULL,
		{
			{ _T("�ޱ�Ե"), _T("ѡ��������Ļ����û�����ס�"), _T("full") },
			{ _T("�б�Ե"), _T("ѡ�������ڿ����ֱ����£���Ļ����������ף��Ա�֤��������� 4:3 ������"), _T("full43") },
		}
	},
	{
		1, TRUE,
		NULL,
		_T("��������"),
		_T(""),
		_T(""),
	},
	{
		2, TRUE,
		_T("uireplacefont_facename"),
		_T("����"),
		_T("ָ����Ϸʹ�õ����塣"),
		NULL,
		{ { NULL } },
		EnumFontface,
	},
	{
		2, TRUE,
		_T("uireplacefont_bold"),
		_T("�Ӵ�"),
		_T("ָ�������Ƿ�Ҫ�Ӵ֡�"),
		NULL,
		{
			{ _T("����"), _T("ѡ���������ֲ���Ӵ֡�"), _T("0,0,0") },
			{ _T("�Ӵ�"), _T("ѡ���������ֻ�Ӵ֡�"), _T("1,1,1") },
		}
	},
	{
		2, TRUE,
		_T("uireplacefont_preloadfontset"),
		_T("Ԥ����"),
		_T("ָ���Ƿ�ҪԤ�������塣"),
		NULL,
		{
			{ _T("��Ԥ��������"), _T("ѡ�����󣬲�Ԥ�����κδ�С�����壬��Ϸ���ܻ�����ʾ����ʱ���١�"), _T("0") },
			{ _T("Ԥ���ؾ�������"), _T("ѡ������ֻԤ���ؾ�������ʹ�õ������С��"), _T("1") },
			{ _T("Ԥ������Ҫ����"), _T("ѡ������ֻԤ������Ҫʹ�õ������С��"), _T("2") },
		}
	},
	{
		0, TRUE,
		NULL,
		_T("�߼�����"),
		_T(""),
		_T(""),
	},
	{
		1, TRUE,
		_T("cdpatch"),
		_T("����̲���"),
		_T("�Ƿ����ñ��������õ�����̲�����\r\n�����Ϸ����ʱ���֡�Please Insert Disc4 to Driver X:����Ϣ���������ñ�ѡ�"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ϸ����ע����ж�ȡ�����̷���Ϣ��"), _T("0") },
			{ _T("����"), _T("���ô�ѡ��������޸�ע�������Ϸ����ͽ�ֱ�Ӵӵ�ǰĿ¼��ȡ��Ϸ���ݡ���ȷ����ִ�е���������װ��"), _T("1") },
		}
	},
	{
		1, TRUE,
		_T("regredirect"),
		_T("ע����ض���"),
		_T("ע����ض����ܿ��Խ���ǰ�����Ρ��͡�С��Ϸ����ͨ��״̬�ض��򵽡�save/registry.txt���ļ��С�ԭʼ����£���Щ��Ϣ�Ǵ洢��ע����еġ�"),
		NULL,
		{
			{ _T("��ע���"), _T("ѡ��������Ϸ������ע����ж�ȡ/д����Щ��Ϣ��"), _T("0") },
			{ _T("�ļ�����"), _T("ѡ��������Ϸ��ȡ��Щ��Ϣʱ�������ȳ��Դ��ļ��ж�ȡ������ȡʧ�ܲŴ�ע����ж�ȡ��д����Ϣʱ����ͬʱд���ļ���ע�����"), _T("1") },
			{ _T("���ļ�"), _T("ѡ��������Ϸ�������ļ��ж�ȡ/д����Щ��Ϣ��"), _T("2") },
		}
	},
	{
		1, TRUE,
		_T("nocpk"),
		_T("�� CPK ����"),
		_T("ԭʼ����£���Ϸ����ȫ����ѹ����������� CPK �ļ�֮�С���ѡ���������Ϸֱ�Ӵ��ļ�ϵͳ��ȡ��Ϸ���ݣ������Ǵ� CPK �ж�ȡ��"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ϸ���� CPK �ж�ȡ��Ϸ���ݡ�"), _T("0") },
			{ _T("����"), _T("���ô�ѡ�����Ϸ��ֱ�Ӵ��ļ�ϵͳ��ȡ��Ϸ���ݣ�����ǰ����Ҫ�� CPK ��ѹ�������õ���ȷλ�ã���"), _T("1") },
		}
	},
	{
		1, TRUE,
		_T("console"),
		_T("��������̨"),
		_T("ԭʼ����£���Ҫ���� sOFTsTAR_pAL3_2003 �����س�����ܵ�������̨����ѡ���������ֱ�ӵ�������̨���� ~ ���ڵİ�������"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ҫ����������ܵ�������̨��"), _T("0") },
			{ _T("����"), _T("���ô�ѡ��󣬿���ֱ�Ӱ�����������̨��"), _T("1") },
		}
	},
	{
		1, TRUE,
		_T("testcombat"),
		_T("ս���༭��"),
		_T("�Ƿ�������Ϸ�������õ�ս���༭����"),
		NULL,
		{
			{ _T("����"), _T("���ô�ѡ�����Ϸ�����󽫽�����������Ϸģʽ��"), _T("0") },
			{ _T("����"), _T("���ô�ѡ�����Ϸ�����󽫽���ս��ϵͳ����ģʽ������ͬʱ������ CPK ��������ģʽ�²��ܽ���������Ϸ��"), _T("1") },
		}
	},
	{
		1, TRUE,
		_T("windowtitle"),
		_T("���ڱ���"),
		_T("�޸���Ϸ���ڱ��⡣ĳЩ�޸���������Ҫ��������Ϊԭʼ���⣨PAL3--SOFTSTAR.sh����������������"),
		_T("�����ı����ڼ�������ʹ�õ���Ϸ���ڱ��⡣������������ 128 �ֽڣ�"),
	},
	{ -1 }, // EOF
};



ConfigDescItem *ConfigDescList = ConfigDescList_CHS;