/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARFormatter : NSObject {

	unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN> >* _itn;

}
+(BOOL)supportedByQuasarConfig:(id)arg1 ;
+(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)convertStringsToQuasarTokens:(id)arg1 ;
+(void)initialize;
-(id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3 ;
-(id)initWithQuasarConfig:(id)arg1 ;
-(id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3 ;
-(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)formatWords:(const vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 task:(id)arg2 ;
-(id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 ;
-(id)formattedStringWithStrings:(id)arg1 ;
-(id)formattedStringWithStrings:(id)arg1 task:(id)arg2 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)getOrthography:(const vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 ;
-(id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3 ;
-(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)formatWords:(const vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 ;
-(id)formattedRecognitionWithNBestList:(id)arg1 ;
@end

