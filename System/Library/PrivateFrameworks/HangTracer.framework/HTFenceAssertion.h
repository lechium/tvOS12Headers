/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HTFenceAssertion : NSObject {

	unsigned long long __name;
	unsigned long long __startTime;

}
-(id)initWithFenceName:(unsigned long long)arg1 ;
-(void)blown;
-(void)invalidate;
@end

