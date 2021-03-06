/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPOperation : PBCodable <NSCopying> {

	NSString* _operationUUID;
	int _type;
	BOOL _last;
	BOOL _synchronousMode;
	SCD_Struct_CK16 _has;

}

@property (nonatomic,readonly) BOOL hasOperationUUID; 
@property (nonatomic,retain) NSString * operationUUID;              //@synthesize operationUUID=_operationUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSynchronousMode; 
@property (assign,nonatomic) BOOL synchronousMode;                  //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (assign,nonatomic) BOOL hasLast; 
@property (assign,nonatomic) BOOL last;                             //@synthesize last=_last - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setOperationUUID:(NSString *)arg1 ;
-(BOOL)hasOperationUUID;
-(void)setSynchronousMode:(BOOL)arg1 ;
-(void)setHasSynchronousMode:(BOOL)arg1 ;
-(BOOL)hasSynchronousMode;
-(void)setHasLast:(BOOL)arg1 ;
-(BOOL)hasLast;
-(BOOL)synchronousMode;
-(BOOL)last;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(NSString *)operationUUID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLast:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end

