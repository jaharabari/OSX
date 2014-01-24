//
//  ImageViewController.h
//  gifs
//
//  Created by Robert Novak on 1/23/14.
//  Copyright (c) 2014 Robert Novak. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol ImageViewProtocol
- (void) esc: (id) sender;
@end

@interface ImageViewController : NSViewController {

}

@property NSView* outer;
@property id<ImageViewProtocol> controller;
@property NSImage* currentImage;

@property IBOutlet NSView* inner;
@property IBOutlet NSImageView* imageView;
@property IBOutlet NSButton* backButton;

- (IBAction)esc:(id)sender;


- (void) add: (NSView*) superView;
- (void) setImage: (NSString*) path;
- (void) removeImage;


@end
