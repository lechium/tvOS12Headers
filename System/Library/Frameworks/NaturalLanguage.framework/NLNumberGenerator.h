/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@interface NLNumberGenerator : NSObject {

	unsigned long long state[2];

}
-(unsigned long long)numberInRange:(NSRange)arg1 ;
-(void)resetWithSeed:(unsigned long long)arg1 ;
-(id)init;
-(void)reset;
@end

