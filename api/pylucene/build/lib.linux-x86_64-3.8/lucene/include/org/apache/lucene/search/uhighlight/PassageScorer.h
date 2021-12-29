#ifndef org_apache_lucene_search_uhighlight_PassageScorer_H
#define org_apache_lucene_search_uhighlight_PassageScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class Passage;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class PassageScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_cf4403e82386af32,
              mid_norm_384f078ef4b8f931,
              mid_score_b1e84377834e6270,
              mid_tf_e11f7abd45d5cdd3,
              mid_weight_e11f7abd45d5cdd3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageScorer(const PassageScorer& obj) : ::java::lang::Object(obj) {}

            PassageScorer();
            PassageScorer(jfloat, jfloat, jfloat);

            jfloat norm(jint) const;
            jfloat score(const ::org::apache::lucene::search::uhighlight::Passage &, jint) const;
            jfloat tf(jint, jint) const;
            jfloat weight(jint, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(PassageScorer);
          extern PyTypeObject *PY_TYPE(PassageScorer);

          class t_PassageScorer {
          public:
            PyObject_HEAD
            PassageScorer object;
            static PyObject *wrap_Object(const PassageScorer&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
