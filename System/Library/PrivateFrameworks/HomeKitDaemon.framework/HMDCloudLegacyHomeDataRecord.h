/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudRecord.h>

@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (nonatomic,retain) NSData * dataVersion2; 
+(id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2 ;
-(id)recordType;
-(unsigned long long)objectEncoding;
-(id)extractObjectChange;
-(BOOL)encodeObjectChange:(id)arg1 ;
-(void)clearData;
-(NSData *)dataVersion2;
-(void)setDataVersion2:(NSData *)arg1 ;
-(id)data;
-(void)setData:(id)arg1 ;
@end

