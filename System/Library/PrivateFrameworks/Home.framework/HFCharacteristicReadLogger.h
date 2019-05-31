/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HFCharacteristicReadLogger : NSObject {

	NSMutableDictionary* _accessoriesToReadByTransport;

}

@property (nonatomic,retain) NSMutableDictionary * accessoriesToReadByTransport;              //@synthesize accessoriesToReadByTransport=_accessoriesToReadByTransport - In the implementation block
+(id)nameForTransportType:(unsigned long long)arg1 ;
+(id)transportKeyForCharacteristic:(id)arg1 ;
-(void)addCharacteristic:(id)arg1 withUpdateLogger:(id)arg2 ;
-(unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)arg1 ;
-(void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2 ;
-(NSMutableDictionary *)accessoriesToReadByTransport;
-(void)setAccessoriesToReadByTransport:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

