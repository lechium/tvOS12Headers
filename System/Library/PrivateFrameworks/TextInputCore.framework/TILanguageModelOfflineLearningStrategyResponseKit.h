/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TILanguageModelOfflineLearningStrategy.h>

@class TILanguageModelOfflineLearningTask, NSMutableDictionary, NSURL, NSString;

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy> {

	NSMutableDictionary* _recipientModels;
	NSURL* _directory;
	TILanguageModelOfflineLearningTask* _learningTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) TILanguageModelOfflineLearningTask * learningTask;              //@synthesize learningTask=_learningTask - In the implementation block
-(TILanguageModelOfflineLearningTask *)learningTask;
-(id)initWithClientIdentifier:(id)arg1 andDirectory:(id)arg2 ;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2 ;
-(id)filterMessages:(id)arg1 ;
-(void)didFinishLearning;
-(id)messagesClusteredByRecipient:(id)arg1 ;
@end

