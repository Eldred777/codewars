(defun string-to-list-numbers (s)
  ; to get a handle on list manipulation
  (ql:quickload :split-sequence)
  (mapcar #'parse-integer (split-sequence:split-sequence #\Space s)))

(defun is-vowel (c)
  (if (member c '(#\a #\e #\i #\o #\u) :test #'eql) t nil))

(defun disemvowel (string)
  (remove-if #'is-vowel string))
