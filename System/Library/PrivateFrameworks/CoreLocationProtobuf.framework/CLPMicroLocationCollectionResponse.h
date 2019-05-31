/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPMicroLocationCollectionResponse : PBCodable <NSCopying> {

	NSString* _msg;
	BOOL _success;

}

@property (assign,nonatomic) BOOL success;                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasMsg; 
@property (nonatomic,retain) NSString * msg;              //@synthesize msg=_msg - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(void)setMsg:(NSString *)arg1 ;
-(BOOL)hasMsg;
-(NSString *)msg;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)success;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

