/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface REPredictionElement : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _privacyBehavior;
	NSArray* _relevanceProviders;
	NSString* _bundleIdentifier;
	NSString* _interaction;
	NSString* _section;

}

@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long privacyBehavior;              //@synthesize privacyBehavior=_privacyBehavior - In the implementation block
@property (nonatomic,readonly) NSArray * relevanceProviders;                    //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * interaction;                          //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,retain) NSString * section;                                //@synthesize section=_section - In the implementation block
+(id)predictionElementFromElement:(id)arg1 ;
+(id)predictionElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 bundleIdentifier:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSString *)interaction;
-(NSArray *)relevanceProviders;
-(unsigned long long)privacyBehavior;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
@end

