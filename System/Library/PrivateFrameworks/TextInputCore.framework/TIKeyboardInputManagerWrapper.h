/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInput/TIKeyboardInputManagerStub.h>

@protocol TIKeyboardInputManagerLogging, TIClientProxy;
@class TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub {

	TIKeyboardInputManagerBase* _inputManager;
	id<TIKeyboardInputManagerLogging> _logger;
	id<TIClientProxy> _clientProxy;

}

@property (nonatomic,retain) TIKeyboardInputManagerBase * inputManager;              //@synthesize inputManager=_inputManager - In the implementation block
@property (nonatomic,retain) id<TIKeyboardInputManagerLogging> logger;               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<TIClientProxy> clientProxy;                          //@synthesize clientProxy=_clientProxy - In the implementation block
-(void)handleKeyboardState:(id)arg1 ;
-(void)acceptSecureCandidate:(id)arg1 keyboardState:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAnalyticsForRejectedSuggestion:(id)arg1 keyboardState:(id)arg2 ;
-(void)_updateKeyboardOutput:(id)arg1 withSecureCandidatePayload:(id)arg2 ;
-(void)handleKeyboardInput:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleAcceptedCandidate:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setInputManager:(TIKeyboardInputManagerBase *)arg1 ;
-(id<TIClientProxy>)clientProxy;
-(void)setClientProxy:(id<TIClientProxy>)arg1 ;
-(id<TIKeyboardInputManagerLogging>)logger;
-(void)setLogger:(id<TIKeyboardInputManagerLogging>)arg1 ;
-(id)init;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(TIKeyboardInputManagerBase *)inputManager;
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
