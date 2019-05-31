/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface SSLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSArray * artwork; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSArray * categoryNames; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) BOOL POIBased; 
@property (nonatomic,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary;                             //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)artwork;
-(NSNumber *)ITunesStoreIdentifier;
-(long long)numberOfUserRatings;
-(NSArray *)categoryNames;
-(BOOL)isPOIBased;
-(long long)numberOfUserRatingsForCurrentVersion;
-(float)userRatingForCurrentVersion;
-(NSURL *)productPageURL;
-(NSString *)itemKind;
-(float)userRating;
-(NSArray *)offers;
-(NSString *)artistName;
-(NSDictionary *)lookupDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

