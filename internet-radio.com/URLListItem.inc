<?php

namespace com\grapsas\streamRecorder\urlParser;


class URLListItem {

  private $url;
  private $title;
  
  
  public function __construct( $url, $title ) {
    $this->url = $url;
    $this->title = $title;
  }
  
  public function __toString() {
    return '\''. $this->title. '\': \''. $this->url. '\'';
  }
  
  
  public function getUrl() {
    return $this->url;
  }
  
  public function getTitle() {
    return $this->title;
  }
}
