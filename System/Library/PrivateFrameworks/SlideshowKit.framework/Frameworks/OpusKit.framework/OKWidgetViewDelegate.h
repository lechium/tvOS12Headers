/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKWidgetViewDelegate <NSObject>
@required
-(id)pageViewForWidgetView:(id)arg1;
-(id)widgetViewResolution:(id)arg1;
-(void)widgetViewCancelAllOperations:(id)arg1;
-(void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2;
-(void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3;
-(void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forWidgetView:(id)arg4;

@end

