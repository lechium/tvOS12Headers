/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * formattedPrice; 
@property (nonatomic,copy,readonly) NSString * offerType; 
@property (nonatomic,copy,readonly) NSNumber * price; 
@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)price;
-(NSDictionary *)lookupDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSString *)offerType;
-(id)initWithLookupItemOffer:(id)arg1 ;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(id)actionTextForType:(id)arg1 ;
-(NSArray *)assets;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

