/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/TIKeyboardInputManager.h>

@class NSString;

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setClassesForSelectorsReplyingWithCandidatesInInterface:(id)arg1 ;
+(id)serverInterface;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)keyboardConfiguration;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)textAccepted:(id)arg1 ;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 requestToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)lastAcceptedCandidateCorrected;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeTypologyLogWithCompletionHandler:(/*^block*/id)arg1 ;
@end

