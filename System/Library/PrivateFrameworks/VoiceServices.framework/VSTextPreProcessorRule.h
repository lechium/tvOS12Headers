/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSString;

@interface VSTextPreProcessorRule : NSObject {

	NSString* _matchPattern;
	NSString* _replacement;
	BOOL _caseSensitive;
	BOOL _eatPunctuation;

}
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)matchedString:(id)arg1 forTokenInRange:(SCD_Struct_VS12*)arg2 ;
-(void)dealloc;
@end
