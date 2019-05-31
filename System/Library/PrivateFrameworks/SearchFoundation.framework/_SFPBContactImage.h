/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBContactImage.h>
@class NSString, NSArray, NSData;


@protocol _SFPBContactImage <NSObject>
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSArray * contactIdentifiers; 
@property (assign,nonatomic) BOOL threeDTouchEnabled; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(id)arg1;
-(NSArray *)contactIdentifiers;
-(void)addContactIdentifiers:(id)arg1;
-(void)clearContactIdentifiers;
-(unsigned long long)contactIdentifiersCount;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(BOOL)threeDTouchEnabled;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setContactIdentifiers:(id)arg1;
-(id)initWithDictionary:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding> {

	BOOL _threeDTouchEnabled;
	NSString* _contactIdentifier;
	NSArray* _contactIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * contactIdentifiers;              //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                 //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSArray *)contactIdentifiers;
-(void)addContactIdentifiers:(id)arg1 ;
-(void)clearContactIdentifiers;
-(unsigned long long)contactIdentifiersCount;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(BOOL)threeDTouchEnabled;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
