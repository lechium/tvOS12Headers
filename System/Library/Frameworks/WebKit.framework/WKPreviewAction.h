/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIPreviewAction.h>
#import <libobjc.A.dylib/WKPreviewActionItem.h>

@class NSString;

@interface WKPreviewAction : UIPreviewAction <WKPreviewActionItem> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

