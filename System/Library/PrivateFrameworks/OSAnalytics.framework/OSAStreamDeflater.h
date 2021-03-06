/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OSAnalytics/OSAnalytics-Structs.h>
@interface OSAStreamDeflater : NSObject {

	z_stream_s* _strm;
	char* _in;
	char* _out;
	BOOL _capViolation;

}

@property (assign) BOOL capViolation;              //@synthesize capViolation=_capViolation - In the implementation block
-(id)copyDeflatedDataFromStream:(_sFILE*)arg1 withCap:(unsigned)arg2 ;
-(BOOL)capViolation;
-(void)setCapViolation:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

