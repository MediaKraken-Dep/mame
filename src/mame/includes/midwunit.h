/*************************************************************************

    Driver for Midway Wolf-unit games.

**************************************************************************/

class midwunit_state : public midtunit_state
{
public:
	midwunit_state(const machine_config &mconfig, device_type type, const char *tag)
		: midtunit_state(mconfig, type, tag),
		  m_nvram(*this, "nvram") { }

	required_shared_ptr<UINT16>	m_nvram;
	UINT8 m_cmos_write_enable;
	UINT16 m_iodata[8];
	UINT8 m_ioshuffle[16];
	UINT8 m_uart[8];
	UINT8 m_security_bits;
	UINT16 *m_umk3_palette;
	DECLARE_WRITE16_MEMBER(midwunit_cmos_enable_w);
	DECLARE_WRITE16_MEMBER(midwunit_cmos_w);
	DECLARE_READ16_MEMBER(midwunit_cmos_r);
	DECLARE_WRITE16_MEMBER(midwunit_io_w);
	DECLARE_READ16_MEMBER(midwunit_io_r);
	DECLARE_READ16_MEMBER(midwunit_security_r);
	DECLARE_WRITE16_MEMBER(midwunit_security_w);
	DECLARE_READ16_MEMBER(midwunit_sound_r);
	DECLARE_READ16_MEMBER(midwunit_sound_state_r);
	DECLARE_WRITE16_MEMBER(midwunit_sound_w);
	DECLARE_WRITE16_MEMBER(umk3_palette_hack_w);
	DECLARE_WRITE16_MEMBER(wwfmania_io_0_w);
	DECLARE_DRIVER_INIT(mk3r10);
	DECLARE_DRIVER_INIT(nbahangt);
	DECLARE_DRIVER_INIT(wwfmania);
	DECLARE_DRIVER_INIT(umk3);
	DECLARE_DRIVER_INIT(mk3);
	DECLARE_DRIVER_INIT(openice);
	DECLARE_DRIVER_INIT(rmpgwt);
	DECLARE_DRIVER_INIT(umk3r11);
	DECLARE_DRIVER_INIT(mk3r20);
	DECLARE_MACHINE_RESET(midwunit);
	DECLARE_VIDEO_START(midwunit);
};

/*----------- defined in machine/midwunit.c -----------*/









