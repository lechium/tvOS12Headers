/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject {

	long long _enableState;
	MPModelObject* _identifyingModelObject;

}

@property (assign,nonatomic) long long enableState;                               //@synthesize enableState=_enableState - In the implementation block
@property (nonatomic,retain) MPModelObject * identifyingModelObject;              //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(void)setIdentifyingModelObject:(MPModelObject *)arg1 ;
-(MPModelObject *)identifyingModelObject;
@end
