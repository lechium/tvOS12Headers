/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SALCMShowModalView : SABaseClientBoundCommand

@property (nonatomic,retain) SAAceView * view; 
+(id)showModalView;
+(id)showModalViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAAceView *)view;
-(void)setView:(SAAceView *)arg1 ;
@end

