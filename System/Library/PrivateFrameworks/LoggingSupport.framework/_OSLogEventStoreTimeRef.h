/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _OSLogEventStoreTimeRef : NSObject {

	unsigned char _uuid[16];
	unsigned long long _ct;

}

@property (nonatomic,readonly) const char* UUID; 
@property (nonatomic,readonly) unsigned long long continuousTime;              //@synthesize ct=_ct - In the implementation block
+(id)timeRef;
-(unsigned long long)continuousTime;
-(id)initWithUUID:(unsigned char)arg1 continuous:(unsigned long long)arg2 ;
-(const char*)UUID;
-(id)initWithDictionary:(id)arg1 ;
@end

