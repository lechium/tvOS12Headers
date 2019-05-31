/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * mediaPlayerOrderingTerms; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSArray * searchProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchConstraint;
+(id)searchConstraintWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)mediaPlayerOrderingTerms;
-(void)setMediaPlayerOrderingTerms:(NSArray *)arg1 ;
-(NSArray *)searchProperties;
-(void)setSearchProperties:(NSArray *)arg1 ;
-(NSString *)query;
@end

