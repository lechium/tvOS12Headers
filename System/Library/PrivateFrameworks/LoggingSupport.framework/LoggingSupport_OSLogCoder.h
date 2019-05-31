/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/OSLogCoder.h>

@interface LoggingSupport_OSLogCoder : NSObject <OSLogCoder> {

	SCD_Struct_Lo0* _fmt_cmd;
	os_trace_blob_s* _ob;
	os_trace_blob_s* _ob_pub;
	os_trace_blob_s* _ob_priv;
	unsigned long long _maxsz;
	unsigned short _written;
	unsigned short _offset;
	BOOL _truncated;

}
-(void)setTruncated;
-(void)setPublic;
-(void)_setFlags:(unsigned char)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

