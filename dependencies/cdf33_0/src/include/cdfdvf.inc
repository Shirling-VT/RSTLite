C------------------------------------------------------------------------------
C
C  NSSDC/CDF				Digital FORTRAN-specific include
C					file for FORTRAN interface.
C
C  Version 1.0, 20-Sep-99, Raytheon ITSS.
C
C  Modification history:
C
C   V1.0  20-Sep-99, M Liu      Original version.
C   V1.1  08-Apr-04, M Liu      Added  new data type CDF_EPOCH16 and some
C                               epoch functions related to the new type.
C   V3.3  10-Apr-09, M Liu      Added CDF_SET_VALIDATE and CDF_GET_VALIDATE.
C
C------------------------------------------------------------------------------

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib' :: CDF_LIB
         END FUNCTION CDF_LIB
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_4
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_4
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_4' :: CDF_LIB_4
         END FUNCTION CDF_LIB_4
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_5
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_5
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_5' :: CDF_LIB_5
         END FUNCTION CDF_LIB_5
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_6
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_6
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_6' :: CDF_LIB_6
         END FUNCTION CDF_LIB_6
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_7
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_7
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_7' :: CDF_LIB_7
         END FUNCTION CDF_LIB_7
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_8
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_8
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_8' :: CDF_LIB_8
         END FUNCTION CDF_LIB_8
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_9
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_9
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_9' :: CDF_LIB_9
         END FUNCTION CDF_LIB_9
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_10
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_10
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_10' :: CDF_LIB_10
         END FUNCTION CDF_LIB_10
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_11
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_11
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_11' :: CDF_LIB_11
         END FUNCTION CDF_LIB_11
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_12
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_12
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_12' :: CDF_LIB_12
         END FUNCTION CDF_LIB_12
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_13
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_13
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_13' :: CDF_LIB_13
         END FUNCTION CDF_LIB_13
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_14
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_14
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_14' :: CDF_LIB_14
         END FUNCTION CDF_LIB_14
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_15
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_15
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_15' :: CDF_LIB_15
         END FUNCTION CDF_LIB_15
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_16
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_16
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_16' :: CDF_LIB_16
         END FUNCTION CDF_LIB_16
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_17
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_17
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_17' :: CDF_LIB_17
         END FUNCTION CDF_LIB_17
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_18
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_18
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_18' :: CDF_LIB_18
         END FUNCTION CDF_LIB_18
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_19
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_19
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_19' :: CDF_LIB_19
         END FUNCTION CDF_LIB_19
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_20
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_20
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_20' :: CDF_LIB_20
         END FUNCTION CDF_LIB_20
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_21
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_21
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_21' :: CDF_LIB_21
         END FUNCTION CDF_LIB_21
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_22
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_22
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_22' :: CDF_LIB_22
         END FUNCTION CDF_LIB_22
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_23
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_23
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_23' :: CDF_LIB_23
         END FUNCTION CDF_LIB_23
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_24
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_24
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_24' :: CDF_LIB_24
         END FUNCTION CDF_LIB_24
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_LIB_25
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_LIB_25
          !DEC$ ATTRIBUTES ALIAS:'_cdf_lib_25' :: CDF_LIB_25
         END FUNCTION CDF_LIB_25
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_OPEN
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_OPEN
          !DEC$ ATTRIBUTES ALIAS:'_cdf_open' :: CDF_OPEN
         END SUBROUTINE CDF_OPEN
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_OPEN_CDF
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_OPEN_CDF
          !DEC$ ATTRIBUTES ALIAS:'_cdf_open_cdf' :: CDF_OPEN_CDF
         END SUBROUTINE CDF_OPEN_CDF
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_CREATE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_CREATE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_create' :: CDF_CREATE
         END SUBROUTINE CDF_CREATE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_CREATE_CDF
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_CREATE_CDF
          !DEC$ ATTRIBUTES ALIAS:'_cdf_create_cdf' :: CDF_CREATE_CDF
         END SUBROUTINE CDF_CREATE_CDF
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_INQUIRE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_INQUIRE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_inquire' :: CDF_INQUIRE
         END SUBROUTINE CDF_INQUIRE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_INQUIRE_CDF
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_INQUIRE_CDF
          !DEC$ ATTRIBUTES ALIAS:'_cdf_inquire_cdf' :: CDF_INQUIRE_CDF
         END SUBROUTINE CDF_INQUIRE_CDF
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_DOC
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_DOC
          !DEC$ ATTRIBUTES ALIAS:'_cdf_doc' :: CDF_DOC
         END SUBROUTINE CDF_DOC
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_CLOSE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_CLOSE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_close' :: CDF_CLOSE
         END SUBROUTINE CDF_CLOSE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_CLOSE_CDF
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_CLOSE_CDF
          !DEC$ ATTRIBUTES ALIAS:'_cdf_close_cdf' :: CDF_CLOSE_CDF
         END SUBROUTINE CDF_CLOSE_CDF
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_DELETE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_DELETE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_delete' :: CDF_DELETE
         END SUBROUTINE CDF_DELETE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_DELETE_CDF
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_DELETE_CDF
          !DEC$ ATTRIBUTES ALIAS:'_cdf_delete_cdf' :: CDF_DELETE_CDF
         END SUBROUTINE CDF_DELETE_CDF
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_SELECT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_SELECT
          !DEC$ ATTRIBUTES ALIAS:'_cdf_select' :: CDF_SELECT
         END SUBROUTINE CDF_SELECT
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_SELECT_CDF
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_SELECT_CDF
          !DEC$ ATTRIBUTES ALIAS:'_cdf_select_cdf' :: CDF_SELECT_CDF
         END SUBROUTINE CDF_SELECT_CDF
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_CREATE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_CREATE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_create' :: CDF_VAR_CREATE
         END SUBROUTINE CDF_VAR_CREATE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_INQUIRE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_INQUIRE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_inquire' :: CDF_VAR_INQUIRE
         END SUBROUTINE CDF_VAR_INQUIRE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_RENAME
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_RENAME
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_rename' :: CDF_VAR_RENAME
         END SUBROUTINE CDF_VAR_RENAME
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_GET
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_GET
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_get' :: CDF_VAR_GET
         END SUBROUTINE CDF_VAR_GET
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_PUT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_PUT
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_put' :: CDF_VAR_PUT
         END SUBROUTINE CDF_VAR_PUT
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_HYPER_GET
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_HYPER_GET
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_hyper_get' :: CDF_VAR_HYPER_GET
         END SUBROUTINE CDF_VAR_HYPER_GET
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_HYPER_PUT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_HYPER_PUT
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_hyper_put' :: CDF_VAR_HYPER_PUT
         END SUBROUTINE CDF_VAR_HYPER_PUT
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_VAR_CLOSE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_CLOSE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_close' :: CDF_VAR_CLOSE
         END SUBROUTINE CDF_VAR_CLOSE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_ATTR_CREATE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ATTR_CREATE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_attr_create' :: CDF_ATTR_CREATE
         END SUBROUTINE CDF_ATTR_CREATE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_ATTR_INQUIRE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ATTR_INQUIRE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_attr_inquire' :: CDF_ATTR_INQUIRE
         END SUBROUTINE CDF_ATTR_INQUIRE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_ATTR_RENAME
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ATTR_RENAME
          !DEC$ ATTRIBUTES ALIAS:'_cdf_attr_rename' :: CDF_ATTR_RENAME
         END SUBROUTINE CDF_ATTR_RENAME
       END INTERFACE
		
       INTERFACE
         SUBROUTINE CDF_ATTR_ENTRY_INQUIRE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ATTR_ENTRY_INQUIRE
          !DEC$ ALIAS CDF_ATTR_ENTRY_INQUIRE,'_cdf_attr_entry_inquire'
         END SUBROUTINE CDF_ATTR_ENTRY_INQUIRE
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_ATTR_GET
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ATTR_GET
          !DEC$ ATTRIBUTES ALIAS:'_cdf_attr_get' :: CDF_ATTR_GET
         END SUBROUTINE CDF_ATTR_GET
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_ATTR_PUT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ATTR_PUT
          !DEC$ ATTRIBUTES ALIAS:'_cdf_attr_put' :: CDF_ATTR_PUT
         END SUBROUTINE CDF_ATTR_PUT
       END INTERFACE
	
       INTERFACE
         SUBROUTINE CDF_ERROR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ERROR
          !DEC$ ATTRIBUTES ALIAS:'_cdf_error' :: CDF_ERROR
         END SUBROUTINE CDF_ERROR
       END INTERFACE
	
       INTERFACE
         INTEGER*4 FUNCTION CDF_VAR_NUM
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_VAR_NUM
          !DEC$ ATTRIBUTES ALIAS:'_cdf_var_num' :: CDF_VAR_NUM
         END FUNCTION CDF_VAR_NUM
       END INTERFACE
	
       INTERFACE
         INTEGER*4 FUNCTION CDF_ATTR_NUM
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_ATTR_NUM
          !DEC$ ATTRIBUTES ALIAS:'_cdf_attr_num' :: CDF_ATTR_NUM
         END FUNCTION CDF_ATTR_NUM
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_GET_FILEBACKWARD
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_GET_FILEBACKWARD
          !DEC$ ATTRIBUTES ALIAS:'_cdf_get_filebackward':: CDF_GET_FILEBACKWARD
         END FUNCTION CDF_GET_FILEBACKWARD
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_SET_FILEBACKWARD
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_SET_FILEBACKWARD
          !DEC$ ATTRIBUTES ALIAS:'_cdf_set_filebackward':: CDF_SET_FILEBACKWARD
         END SUBROUTINE CDF_SET_FILEBACKWARD
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_GET_VALIDATE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_GET_VALIDATE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_get_validate':: CDF_GET_VALIDATE
         END FUNCTION CDF_GET_VALIDATE
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_SET_VALIDATE
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_SET_VALIDATE
          !DEC$ ATTRIBUTES ALIAS:'_cdf_set_validate':: CDF_SET_VALIDATE
         END SUBROUTINE CDF_SET_VALIDATE
       END INTERFACE

       INTERFACE
         SUBROUTINE EPOCH_BREAKDOWN
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: EPOCH_BREAKDOWN
          !DEC$ ATTRIBUTES ALIAS:'_epoch_breakdown' :: EPOCH_BREAKDOWN
         END SUBROUTINE EPOCH_BREAKDOWN
       END INTERFACE
	
       INTERFACE
         SUBROUTINE COMPUTE_EPOCH
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: COMPUTE_EPOCH
          !DEC$ ATTRIBUTES ALIAS:'_compute_epoch' :: COMPUTE_EPOCH
         END SUBROUTINE COMPUTE_EPOCH
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch' :: PARSE_EPOCH
         END SUBROUTINE PARSE_EPOCH
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH1
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH1
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch1' :: PARSE_EPOCH1
         END SUBROUTINE PARSE_EPOCH1
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH2
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH2
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch2' :: PARSE_EPOCH2
         END SUBROUTINE PARSE_EPOCH2
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH3
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH3
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch3' :: PARSE_EPOCH3
         END SUBROUTINE PARSE_EPOCH3
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch' :: ENCODE_EPOCH
         END SUBROUTINE ENCODE_EPOCH
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH1
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH1
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch1' :: ENCODE_EPOCH1
         END SUBROUTINE ENCODE_EPOCH1
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH2
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH2
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch2' :: ENCODE_EPOCH2
         END SUBROUTINE ENCODE_EPOCH2
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH3
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH3
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch3' :: ENCODE_EPOCH3
         END SUBROUTINE ENCODE_EPOCH3
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCHX
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCHX
          !DEC$ ATTRIBUTES ALIAS:'_encode_epochx' :: ENCODE_EPOCHX
         END SUBROUTINE ENCODE_EPOCHX
       END INTERFACE

       INTERFACE
         SUBROUTINE EPOCH16_BREAKDOWN
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: EPOCH16_BREAKDOWN
          !DEC$ ATTRIBUTES ALIAS:'_epoch16_breakdown'::EPOCH16_BREAKDOWN
         END SUBROUTINE EPOCH16_BREAKDOWN
       END INTERFACE
	
       INTERFACE
         SUBROUTINE COMPUTE_EPOCH16
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: COMPUTE_EPOCH16
          !DEC$ ATTRIBUTES ALIAS:'_compute_epoch16' :: COMPUTE_EPOCH16
         END SUBROUTINE COMPUTE_EPOCH16
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH16
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH16
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch16' :: PARSE_EPOCH16
         END SUBROUTINE PARSE_EPOCH16
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH16_1
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH16_1
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch16_1' :: PARSE_EPOCH16_1
         END SUBROUTINE PARSE_EPOCH16_1
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH16_2
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH16_2
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch16_2' :: PARSE_EPOCH16_2
         END SUBROUTINE PARSE_EPOCH16_2
       END INTERFACE
	
       INTERFACE
         SUBROUTINE PARSE_EPOCH16_3
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: PARSE_EPOCH16_3
          !DEC$ ATTRIBUTES ALIAS:'_parse_epoch16_3' :: PARSE_EPOCH16_3
         END SUBROUTINE PARSE_EPOCH16_3
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH16
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH16
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch16' :: ENCODE_EPOCH16
         END SUBROUTINE ENCODE_EPOCH16
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH16_1
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH16_1
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch16_1' :: ENCODE_EPOCH16_1
         END SUBROUTINE ENCODE_EPOCH16_1
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH16_2
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH16_2
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch16_2' :: ENCODE_EPOCH16_2
         END SUBROUTINE ENCODE_EPOCH16_2
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH16_3
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH16_3
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch16_3' :: ENCODE_EPOCH16_3
         END SUBROUTINE ENCODE_EPOCH16_3
       END INTERFACE
	
       INTERFACE
         SUBROUTINE ENCODE_EPOCH16_X
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: ENCODE_EPOCH16_X
          !DEC$ ATTRIBUTES ALIAS:'_encode_epoch16_x' :: ENCODE_EPOCH16_X
         END SUBROUTINE ENCODE_EPOCH16_X
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GETRVARSRECORDDATA
          !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_GETRVARSRECORDDATA
          !DEC$ ALIAS CDF_GETRVARSRECORDDATA,'_cdf_getrvarsrecorddata'
         END SUBROUTINE CDF_GETRVARSRECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GETZVARSRECORDDATA
         !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_GETZVARSRECORDDATA
         !DEC$ ALIAS CDF_GETZVARSRECORDDATA,'_cdf_getzvarsrecorddata'
         END SUBROUTINE CDF_GETZVARSRECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVARS_RECORDDATA
         !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_GET_ZVARS_RECORDDATA
         !DEC$ ALIAS CDF_GET_ZVARS_RECORDDATA,'_cdf_get_zvars_recorddata'
         END SUBROUTINE CDF_GET_ZVARS_RECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUTRVARSRECORDDATA
          !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_PUTRVARSRECORDDATA
          !DEC$ ALIAS CDF_PUTRVARSRECORDDATA,'_cdf_putrvarsrecorddata'
         END SUBROUTINE CDF_PUTRVARSRECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUTZVARSRECORDDATA
         !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_PUTZVARSRECORDDATA
         !DEC$ ALIAS CDF_PUTZVARSRECORDDATA,'_cdf_putzvarsrecorddata'
         END SUBROUTINE CDF_PUTZVARSRECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ZVARS_RECORDDATA
         !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_PUT_ZVARS_RECORDDATA
         !DEC$ ALIAS CDF_PUT_ZVARS_RECORDDATA,'_cdf_put_zvars_recorddata'
         END SUBROUTINE CDF_PUT_ZVARS_RECORDDATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_CREATE_CDF_INTERNAL
          !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_CREATE_CDF_INTERNAL
          !DEC$ ALIAS CDF_CREATE_CDF_INTERNAL,'_cdf_create_cdf_internal'
         END SUBROUTINE CDF_CREATE_CDF_INTERNAL
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_GET_ATTR_NUM
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_NUM
          !DEC$ ALIAS CDF_GET_ATTR_NUM, '_cdf_get_attr_num'
         END FUNCTION CDF_GET_ATTR_NUM
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_RENAME_ATTR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_RENAME_ATTR
          !DEC$ ALIAS CDF_RENAME_ATTR, '_cdf_rename_attr'
         END SUBROUTINE CDF_RENAME_ATTR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_INQUIRE_ATTR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_INQUIRE_ATTR
          !DEC$ ALIAS CDF_INQUIRE_ATTR, '_cdf_inquire_attr'
         END SUBROUTINE CDF_INQUIRE_ATTR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_INQUIRE_ATTR_GENTRY
          !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_INQUIRE_ATTR_GENTRY
          !DEC$ ALIAS CDF_INQUIRE_ATTR_GENTRY,'_cdf_inquire_attr_gentry'
         END SUBROUTINE CDF_INQUIRE_ATTR_GENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_INQUIRE_ATTR_RENTRY
          !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_INQUIRE_ATTR_RENTRY
          !DEC$ ALIAS CDF_INQUIRE_ATTR_RENTRY,'_cdf_inquire_attr_rentry'
         END SUBROUTINE CDF_INQUIRE_ATTR_RENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_INQUIRE_ATTR_ZENTRY
          !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_INQUIRE_ATTR_ZENTRY
          !DEC$ ALIAS CDF_INQUIRE_ATTR_ZENTRY,'_cdf_inquire_attr_zentry'
         END SUBROUTINE CDF_INQUIRE_ATTR_ZENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ATTR_GENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_PUT_ATTR_GENTRY
          !DEC$ ALIAS CDF_PUT_ATTR_GENTRY, '_cdf_put_attr_gentry'
         END SUBROUTINE CDF_PUT_ATTR_GENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ATTR_RENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_PUT_ATTR_RENTRY
          !DEC$ ALIAS CDF_PUT_ATTR_RENTRY, '_cdf_put_attr_rentry'
         END SUBROUTINE CDF_PUT_ATTR_RENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ATTR_ZENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_PUT_ATTR_ZENTRY
          !DEC$ ALIAS CDF_PUT_ATTR_ZENTRY, '_cdf_put_attr_zentry'
         END SUBROUTINE CDF_PUT_ATTR_ZENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_GENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_GENTRY
          !DEC$ ALIAS CDF_GET_ATTR_GENTRY, '_cdf_get_attr_gentry'
         END SUBROUTINE CDF_GET_ATTR_GENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_RENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_RENTRY
          !DEC$ ALIAS CDF_GET_ATTR_RENTRY, '_cdf_get_attr_rentry'
         END SUBROUTINE CDF_GET_ATTR_RENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ATTR_ZENTRY
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ATTR_ZENTRY
          !DEC$ ALIAS CDF_GET_ATTR_ZENTRY, '_cdf_get_attr_zentry'
         END SUBROUTINE CDF_GET_ATTR_ZENTRY
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_CREATE_ZVAR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_CREATE_ZVAR
          !DEC$ ALIAS CDF_CREATE_ZVAR, '_cdf_create_zvar'
         END SUBROUTINE CDF_CREATE_ZVAR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_CREATE_ATTR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING :: CDF_CREATE_ATTR
          !DEC$ ALIAS CDF_CREATE_ATTR, '_cdf_create_attr' 
          END SUBROUTINE CDF_CREATE_ATTR
       END INTERFACE

       INTERFACE
         INTEGER*4 FUNCTION CDF_GET_VAR_NUM
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_VAR_NUM
          !DEC$ ALIAS CDF_GET_VAR_NUM, '_cdf_get_var_num'
         END FUNCTION CDF_GET_VAR_NUM
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_RENAME_ZVAR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_RENAME_ZVAR
          !DEC$ ALIAS CDF_RENAME_ZVAR, '_cdf_rename_zvar'
         END SUBROUTINE CDF_RENAME_ZVAR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_INQUIRE_ZVAR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_INQUIRE_ZVAR
          !DEC$ ALIAS CDF_INQUIRE_ZVAR, '_cdf_inquire_zvar'
         END SUBROUTINE CDF_INQUIRE_ZVAR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_PUT_ZVAR_DATA
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_PUT_ZVAR_DATA
          !DEC$ ALIAS CDF_PUT_ZVAR_DATA, '_cdf_put_zvar_data'
         END SUBROUTINE CDF_PUT_ZVAR_DATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_ZVAR_DATA
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_ZVAR_DATA
          !DEC$ ALIAS CDF_GET_ZVAR_DATA, '_cdf_get_zvar_data'
         END SUBROUTINE CDF_GET_ZVAR_DATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_HYPER_PUT_ZVAR_DATA
          !DEC$ ATTRIBUTES C, REFERENCE,VARYING::CDF_HYPER_PUT_ZVAR_DATA
          !DEC$ ALIAS CDF_HYPER_PUT_ZVAR_DATA,'_cdf_hyper_put_zvar_data'
         END SUBROUTINE CDF_HYPER_PUT_ZVAR_DATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_HYPER_GET_ZVAR_DATA
          !DEC$ ATTRIBUTES C,REFERENCE,VARYING::CDF_HYPER_GET_ZVAR_DATA
          !DEC$ ALIAS CDF_HYPER_GET_ZVAR_DATA,'_cdf_hyper_get_zvar_data'
         END SUBROUTINE CDF_HYPER_GET_ZVAR_DATA
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_CLOSE_ZVAR
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_CLOSE_ZVAR
          !DEC$ ALIAS CDF_CLOSE_ZVAR, '_cdf_close_zvar'
         END SUBROUTINE CDF_CLOSE_ZVAR
       END INTERFACE

       INTERFACE
         SUBROUTINE CDF_GET_STATUS_TEXT
          !DEC$ ATTRIBUTES C, REFERENCE, VARYING ::CDF_GET_STATUS_TEXT
          !DEC$ ALIAS CDF_GET_STATUS_TEXT, '_cdf_get_status_text'
         END SUBROUTINE CDF_GET_STATUS_TEXT
       END INTERFACE



