/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGImage* CGImageRef;

typedef struct {
	BOOL playbackStateDidChange;
	BOOL interactingDidChange;
	BOOL gestureRecognizerDidChange;
} SCD_Struct_IS1;

typedef struct {
	BOOL playerItemLoadingTarget;
	BOOL playerPlayerItem;
	BOOL playerView;
	BOOL playerMuted;
	BOOL status;
	BOOL readyForDisplay;
	BOOL playbackState;
} SCD_Struct_IS2;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IS4;

typedef struct {
	SCD_Struct_IS4 start;
	SCD_Struct_IS4 duration;
} SCD_Struct_IS5;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	BOOL didChangeWithAnimationDuration;
} SCD_Struct_IS7;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	BOOL videoPlayer;
	BOOL videoPlayerVolume;
	BOOL contentFromPlayerItem;
	BOOL willPlayToEndObserver;
	BOOL willPlayToPhotoObserver;
	BOOL status;
} SCD_Struct_IS10;

typedef struct {
	BOOL scale;
	BOOL apertureMode;
} SCD_Struct_IS11;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	BOOL videoPlayerItem;
	BOOL status;
	BOOL content;
	BOOL minimumClientVersion;
	BOOL playbackStyleIdentifier;
} SCD_Struct_IS15;
