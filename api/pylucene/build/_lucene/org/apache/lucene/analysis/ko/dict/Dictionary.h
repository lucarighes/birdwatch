#ifndef org_apache_lucene_analysis_ko_dict_Dictionary_H
#define org_apache_lucene_analysis_ko_dict_Dictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
          }
          class POS$Type;
          class POS$Tag;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class Dictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getLeftId_1e143afe1894d213,
                mid_getLeftPOS_b8b0dfb882948f38,
                mid_getMorphemes_ec2d69830563855a,
                mid_getPOSType_b7cb9401295fad9c,
                mid_getReading_d7593acad64ef635,
                mid_getRightId_1e143afe1894d213,
                mid_getRightPOS_b8b0dfb882948f38,
                mid_getWordCost_1e143afe1894d213,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

              jint getLeftId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS(jint) const;
              JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes(jint, const JArray< jchar > &, jint, jint) const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType(jint) const;
              ::java::lang::String getReading(jint) const;
              jint getRightId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS(jint) const;
              jint getWordCost(jint) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(Dictionary);
            extern PyTypeObject *PY_TYPE(Dictionary);

            class t_Dictionary {
            public:
              PyObject_HEAD
              Dictionary object;
              static PyObject *wrap_Object(const Dictionary&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
