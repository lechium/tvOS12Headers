/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSString * variation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionVariation;
+(id)definitionVariationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)examples;
-(void)setExamples:(NSArray *)arg1 ;
-(NSString *)variation;
-(void)setVariation:(NSString *)arg1 ;
@end

