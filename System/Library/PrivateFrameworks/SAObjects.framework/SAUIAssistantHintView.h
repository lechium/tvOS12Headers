/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIAssistantUtteranceView.h>

@class NSArray;

@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * regions; 
+(id)assistantHintView;
+(id)assistantHintViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRegions:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)regions;
@end
