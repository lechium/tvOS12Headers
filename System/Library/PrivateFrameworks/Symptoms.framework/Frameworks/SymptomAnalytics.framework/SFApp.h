/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomAnalytics/Process.h>

@class NSSet, NSOrderedSet, SFAppCalendarUsage;

@interface SFApp : Process

@property (nonatomic,retain) NSSet * hasAppRun; 
@property (nonatomic,retain) NSSet * hasCalendarUsage; 
@property (nonatomic,retain) NSOrderedSet * hasTypicalUsage; 
@property (nonatomic,retain) SFAppCalendarUsage * hintCalendarUsage; 
+(id)fetchRequest;
+(id)entityName;
-(void)insertObject:(id)arg1 inHasTypicalUsageAtIndex:(unsigned long long)arg2 ;
@end

