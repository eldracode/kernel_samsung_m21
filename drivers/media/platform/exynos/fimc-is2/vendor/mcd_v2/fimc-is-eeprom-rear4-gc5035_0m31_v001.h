#ifndef FIMC_IS_EEPROM_REAR4_GC5035_0M31_V001_H
#define FIMC_IS_EEPROM_REAR4_GC5035_0M31_V001_H

/* Reference File (Both files are same)
 * Universal EEPROM map data V001_20191122_for_M31_RAMEN_8K_(GC5035_5M_Macro).xlsx
 * Universal EEPROM map data V001_20191010_for_A71_5G_NEUS_8K_(GC5035_5M_Macro)_COMMON.xlsx
 */

#define FIMC_IS_REAR4_MAX_CAL_SIZE  (8 * 1024)
#define REAR4_HEADER_CHECKSUM_LEN   (0xFB - 0x00 + 0x1)
#define REAR4_OEM_CHECKSUM_LEN      (0x0189 - 0x0100 + 0x1)
#define REAR4_AWB_CHECKSUM_LEN      (0x023B - 0x1C0 + 0x1)
#define REAR4_SHADING_CHECKSUM_LEN  (0x1C4F - 0x0260 + 0x1)
#define REAR4_AE_CHECKSUM_LEN       (0x1CCF - 0x1C70 + 0x1)

struct rom_ae_cal_data rear4_gc5035_ae_cal_info = {
	.rom_header_main_ae_start_addr  = 0x28,
	.rom_header_main_ae_end_addr    = 0x2C,
	.rom_ae_module_info_start_addr  = 0x1CD0,
	.rom_ae_checksum_addr           = 0x1CEC,
	.rom_ae_checksum_len            = REAR4_AE_CHECKSUM_LEN,
};

const struct rom_extend_cal_addr rear4_gc5035_extend_cal_addr = {
	.name = EXTEND_AE_CAL,
	.data = &rear4_gc5035_ae_cal_info,
	.next = NULL,
};

const struct fimc_is_vender_rom_addr rear4_gc5035_cal_addr = {
	/* Set '-1' if not used */

	.camera_module_es_version                   = 'A',
	.cal_map_es_version                         = '1',
	.rom_max_cal_size                           = FIMC_IS_REAR4_MAX_CAL_SIZE,

	.rom_header_cal_data_start_addr             = 0x00,
	.rom_header_main_module_info_start_addr     = 0x40,
	.rom_header_cal_map_ver_start_addr          = 0x50,
	.rom_header_project_name_start_addr         = 0x58,
	.rom_header_module_id_addr                  = 0xAE,
	.rom_header_main_sensor_id_addr             = 0xB8,

	.rom_header_sub_module_info_start_addr      = -1,
	.rom_header_sub_sensor_id_addr              = -1,

	.rom_header_main_header_start_addr          = 0x00,
	.rom_header_main_header_end_addr            = 0x04,
	.rom_header_main_oem_start_addr             = 0x08,
	.rom_header_main_oem_end_addr               = 0x0C,
	.rom_header_main_awb_start_addr             = 0x10,
	.rom_header_main_awb_end_addr               = 0x14,
	.rom_header_main_shading_start_addr         = 0x18,
	.rom_header_main_shading_end_addr           = 0x1C,
	.rom_header_main_sensor_cal_start_addr      = -1,
	.rom_header_main_sensor_cal_end_addr        = -1,
	.rom_header_dual_cal_start_addr             = -1,
	.rom_header_dual_cal_end_addr               = -1,
	.rom_header_pdaf_cal_start_addr             = -1,
	.rom_header_pdaf_cal_end_addr               = -1,

	.rom_header_sub_oem_start_addr              = -1,
	.rom_header_sub_oem_end_addr                = -1,
	.rom_header_sub_awb_start_addr              = -1,
	.rom_header_sub_awb_end_addr                = -1,
	.rom_header_sub_shading_start_addr          = -1,
	.rom_header_sub_shading_end_addr            = -1,

	.rom_header_main_mtf_data_addr              = 0x0156,
	.rom_header_sub_mtf_data_addr               = -1,

	.rom_header_checksum_addr                   = 0xFC,
	.rom_header_checksum_len                    = REAR4_HEADER_CHECKSUM_LEN,

	.rom_oem_af_inf_position_addr               = 0x0100,
	.rom_oem_af_macro_position_addr             = 0x0108,
	.rom_oem_module_info_start_addr             = 0x018A,
	.rom_oem_checksum_addr                      = 0x01BC,
	.rom_oem_checksum_len                       = REAR4_OEM_CHECKSUM_LEN,

	.rom_awb_module_info_start_addr             = 0x023C,
	.rom_awb_checksum_addr                      = 0x025C,
	.rom_awb_checksum_len                       = REAR4_AWB_CHECKSUM_LEN,

	.rom_shading_module_info_start_addr         = 0x1C50,
	.rom_shading_checksum_addr                  = 0x1C6C,
	.rom_shading_checksum_len                   = REAR4_SHADING_CHECKSUM_LEN,

	.rom_sensor_cal_module_info_start_addr      = -1,
	.rom_sensor_cal_checksum_addr               = -1,
	.rom_sensor_cal_checksum_len                = -1,

	.rom_dual_module_info_start_addr            = -1,
	.rom_dual_checksum_addr                     = -1,
	.rom_dual_checksum_len                      = -1,

	.rom_pdaf_module_info_start_addr            = -1,
	.rom_pdaf_checksum_addr                     = -1,
	.rom_pdaf_checksum_len                      = -1,

	.rom_sub_oem_af_inf_position_addr           = -1,
	.rom_sub_oem_af_macro_position_addr         = -1,
	.rom_sub_oem_module_info_start_addr         = -1,
	.rom_sub_oem_checksum_addr                  = -1,
	.rom_sub_oem_checksum_len                   = -1,


	.rom_sub_awb_module_info_start_addr         = -1,
	.rom_sub_awb_checksum_addr                  = -1,
	.rom_sub_awb_checksum_len                   = -1,

	.rom_sub_shading_module_info_start_addr     = -1,
	.rom_sub_shading_checksum_addr              = -1,
	.rom_sub_shading_checksum_len               = -1,

	.rom_dual_cal_data2_start_addr              = -1,
	.rom_dual_cal_data2_size                    = -1,
	.rom_dual_tilt_x_addr                       = -1,
	.rom_dual_tilt_y_addr                       = -1,
	.rom_dual_tilt_z_addr                       = -1,
	.rom_dual_tilt_sx_addr                      = -1,
	.rom_dual_tilt_sy_addr                      = -1,
	.rom_dual_tilt_range_addr                   = -1,
	.rom_dual_tilt_max_err_addr                 = -1,
	.rom_dual_tilt_avg_err_addr                 = -1,
	.rom_dual_tilt_dll_version_addr             = -1,
	.rom_dual_shift_x_addr                      = -1,
	.rom_dual_shift_y_addr                      = -1,

	.extend_cal_addr                            = &rear4_gc5035_extend_cal_addr,
};
#endif
