/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <NSCopying> {

	NSMutableArray* _devices;
	NSMutableArray* _pairingIDs;

}

@property (nonatomic,retain) NSMutableArray * pairingIDs;              //@synthesize pairingIDs=_pairingIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * devices;                 //@synthesize devices=_devices - In the implementation block
+(Class)pairingIDsType;
+(Class)devicesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearDevices;
-(NSMutableArray *)devices;
-(void)setDevices:(NSMutableArray *)arg1 ;
-(void)addDevices:(id)arg1 ;
-(void)addPairingIDs:(id)arg1 ;
-(unsigned long long)pairingIDsCount;
-(void)clearPairingIDs;
-(id)pairingIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)devicesCount;
-(id)devicesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pairingIDs;
-(void)setPairingIDs:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

