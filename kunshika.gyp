{
  'target_defaults': {
    'cflags': [
      '<!@(mecab-config --cflags)',
      '<!@(Magick++-config --cxxflags)'
    ],
    "libraries": [
      '<!@(mecab-config --libs)',
      '<!@(Magick++-config --libs)'
    ],
    'include_dirs': [
      './src'
    ],
  },
  'targets': [
    {
      'target_name': 'kunshika',
      'type': 'executable',
      'sources': [
        './src/kunshika.cc'
      ]
    }
  ]
}