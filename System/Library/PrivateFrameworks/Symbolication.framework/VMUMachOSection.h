/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VMUMachOSection : NSObject {

	unsigned long long _localAddress;
	unsigned long long _mappingSize;

}
-(id)initWithTask:(unsigned)arg1 remoteAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(unsigned long long)mappingSize;
-(unsigned long long)localAddress;
-(void)dealloc;
@end

