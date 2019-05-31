/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXPredictiveTypingModel : NSObject {

	void* _wordModel;

}
-(void)enumerateTokensForText:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned*)_newContextForText:(id)arg1 includeLastToken:(BOOL)arg2 length:(long long*)arg3 ;
-(id)_lastPartialWordForText:(id)arg1 orEndOfSentence:(BOOL*)arg2 ;
-(id)_completionPredictionsForPrefix:(id)arg1 entireText:(id)arg2 desiredNumber:(unsigned long long)arg3 ;
-(id)_nextWordPredictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2 ;
-(id)predictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2 ;
-(id)predictionsForText:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

