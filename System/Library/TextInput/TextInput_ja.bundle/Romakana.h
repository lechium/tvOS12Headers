/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCharacterSet;

@interface Romakana : NSObject {

	NSCharacterSet* _consonantsCharacterSet;

}
+(id)oneKanaToRoma:(id)arg1 ;
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 ;
+(id)kanaSymbol:(id)arg1 ;
-(id)roma2hiragana:(id)arg1 stripIncompleteRomajiAtEnd:(BOOL)arg2 incompleteRomajiLength:(unsigned long long*)arg3 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end

