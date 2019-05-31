/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVLoggingIdentifier.h>

@class NSString, AVSpecifiedLoggingIdentifierInternal;

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVSpecifiedLoggingIdentifierInternal* _specifiedLoggingIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
-(void)finalize;
-(id)makeDerivedIdentifier;
-(id)initWithSpecifiedName:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(NSString *)description;
@end
