/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFFeedbackListener;
@interface WeakListener : NSObject {

	id<SFFeedbackListener> _weakListener;

}

@property (nonatomic,readonly) id<SFFeedbackListener> strongListener; 
-(id<SFFeedbackListener>)strongListener;
-(id)initWithListener:(id)arg1 ;
@end

