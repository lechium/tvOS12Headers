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

@interface SANodeIntent : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * matchingSpans; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * privacyPolicy; 
@property (nonatomic,retain) id<SAAceSerializable> value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeIntent;
+(id)nodeIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)privacyPolicy;
-(NSArray *)matchingSpans;
-(void)setMatchingSpans:(NSArray *)arg1 ;
-(void)setPrivacyPolicy:(NSArray *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id<SAAceSerializable>)value;
-(void)setValue:(id<SAAceSerializable>)arg1 ;
@end

