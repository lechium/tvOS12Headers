/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSPDNSResourceRecord : NSObject {

	long long _type;
	NSString* _name;
	long long _recordClass;
	unsigned long long _timeToLive;
	unsigned long long _dataLength;
	NSString* _resourceString;

}

@property (readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (readonly) long long recordClass;                      //@synthesize recordClass=_recordClass - In the implementation block
@property (readonly) unsigned long long timeToLive;              //@synthesize timeToLive=_timeToLive - In the implementation block
@property (readonly) unsigned long long dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
@property (readonly) NSString * resourceString;                  //@synthesize resourceString=_resourceString - In the implementation block
+(id)typeToString:(long long)arg1 ;
-(unsigned long long)timeToLive;
-(id)copyStateDictionary;
-(NSString *)resourceString;
-(id)initFromByteParser:(id)arg1 ;
-(long long)recordClass;
-(unsigned long long)dataLength;
-(NSString *)name;
-(long long)type;
@end

