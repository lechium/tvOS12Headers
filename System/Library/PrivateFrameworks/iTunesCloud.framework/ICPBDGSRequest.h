/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying> {

	ICPBDGSFinishDelegationRequest* _finishDelegationRequest;
	ICPBDGSStartDelegationRequest* _startDelegationRequest;
	unsigned _uniqueID;
	SCD_Struct_IC16 _has;

}

@property (assign,nonatomic) BOOL hasUniqueID; 
@property (assign,nonatomic) unsigned uniqueID;                                                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasStartDelegationRequest; 
@property (nonatomic,retain) ICPBDGSStartDelegationRequest * startDelegationRequest;                //@synthesize startDelegationRequest=_startDelegationRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishDelegationRequest; 
@property (nonatomic,retain) ICPBDGSFinishDelegationRequest * finishDelegationRequest;              //@synthesize finishDelegationRequest=_finishDelegationRequest - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUniqueID:(unsigned)arg1 ;
-(BOOL)hasUniqueID;
-(unsigned)uniqueID;
-(void)setStartDelegationRequest:(ICPBDGSStartDelegationRequest *)arg1 ;
-(void)setFinishDelegationRequest:(ICPBDGSFinishDelegationRequest *)arg1 ;
-(void)setHasUniqueID:(BOOL)arg1 ;
-(BOOL)hasStartDelegationRequest;
-(BOOL)hasFinishDelegationRequest;
-(ICPBDGSStartDelegationRequest *)startDelegationRequest;
-(ICPBDGSFinishDelegationRequest *)finishDelegationRequest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

