/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCommandValue.h>
@class _SFPBReferentialCommand, NSData;


@protocol _SFPBCommandValue <NSObject>
@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBReferentialCommand, NSData, NSString;

@interface _SFPBCommandValue : PBCodable <_SFPBCommandValue, NSSecureCoding> {

	_SFPBReferentialCommand* _referentialCommand;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand;              //@synthesize referentialCommand=_referentialCommand - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(_SFPBReferentialCommand *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

