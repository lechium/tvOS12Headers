/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {

	NSRegularExpression* _regex;
	NSArray* _parameterNames;
	NSString* _scheme;

}
-(BOOL)matchesURL:(id)arg1 ;
-(id)initWithString:(id)arg1 scheme:(id)arg2 ;
-(id)nonParameterCharacterSet;
-(BOOL)matchesURL:(id)arg1 parameters:(id*)arg2 ;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
@end
